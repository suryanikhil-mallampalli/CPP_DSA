function validatePassword(password) {
    // Check length
    if (password.length < 6) {
      return false;
    }
  
    // Check for at least one lowercase letter
    if (!/[a-z]/.test(password)) {
      return false;
    }
  
    // Check for at least one uppercase letter
    if (!/[A-Z]/.test(password)) {
      return false;
    }
  
    // Check for at least one digit
    if (!/\d/.test(password)) {
      return false;
    }
  
    // All checks pass
    return true;
  }
console.log(validatePassword("abc123")); // true
console.log(validatePassword("ABC123")); // true
console.log(validatePassword("aBc123")); // true
console.log(validatePassword("password")); // false (length < 6)
console.log(validatePassword("123456")); // false (no letters)
console.log(validatePassword("ABCDEF")); // false (no lowercase letters)
console.log(validatePassword("abcdef")); // false (no uppercase letters)
console.log(validatePassword("abcXYZ")); // false (no digits)

var password = prompt("Enter number of rows to be printed:");
validatePassword(password)