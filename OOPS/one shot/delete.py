import os
import tempfile
import pickle
import heapq

class Block:
    def __init__(self, block_id, block_content):
        self.block_id = block_id
        self.block_content = block_content

    def __lt__(self, other):
        return self.block_content < other.block_content

class BSBIIndex:
    def __init__(self, input_directory, output_index_file):
        self.input_directory = input_directory
        self.output_index_file = output_index_file
        self.block_size = 100  # Number of documents per block
        self.blocks = []

    def read_block(self, block_id):
        block_content = []
        for doc_id in range(block_id * self.block_size, (block_id + 1) * self.block_size):
            file_path = os.path.join(self.input_directory, f'doc{doc_id}.txt')
            if os.path.exists(file_path):
                with open(file_path, 'r') as file:
                    block_content.append((doc_id, file.read()))
        return block_content

    def create_blocks(self):
        block_id = 0
        while True:
            block_content = self.read_block(block_id)
            if not block_content:
                break
            block_content.sort(key=lambda x: x[1])
            self.blocks.append(Block(block_id, block_content))
            block_id += 1

    def merge_blocks(self):
        merged_block = []
        for block in self.blocks:
            merged_block.extend(block.block_content)
        merged_block.sort(key=lambda x: x[1])
        return merged_block

    def build_index(self):
        self.create_blocks()
        merged_block = self.merge_blocks()
        inverted_index = {}
        current_term = None
        current_postings = []

        for doc_id, doc_content in merged_block:
            terms = doc_content.split()
            for term in terms:
                if term != current_term:
                    if current_term:
                        inverted_index[current_term] = current_postings
                    current_term = term
                    current_postings = []
                current_postings.append(doc_id)

        if current_term:
            inverted_index[current_term] = current_postings

        with open(self.output_index_file, 'wb') as index_file:
            pickle.dump(inverted_index, index_file)

    def search(self, query_term):
        with open(self.output_index_file, 'rb') as index_file:
            inverted_index = pickle.load(index_file)
        if query_term in inverted_index:
            return inverted_index[query_term]
        else:
            return []

def main():
    input_directory = "path/to/your/documents"  # Replace with the actual directory path
    output_index_file = "inverted_index.pkl"
    bsbi_index = BSBIIndex(input_directory, output_index_file)
    bsbi_index.build_index()

    # Example search
    query_term = "example"
    relevant_documents = bsbi_index.search(query_term)
    print("Documents relevant to the query:", relevant_documents)

if __name__ == "__main__":
    main()
