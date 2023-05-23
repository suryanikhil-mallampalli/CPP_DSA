var rows = prompt("Enter number of rows to be printed:")
var i, j, n = 1 
for (i = 1; i <= rows; i++)
{
    for (j = 1; j <= i; j++, n++)
        document.write(n + " ")
    document.write("<br>")
}
