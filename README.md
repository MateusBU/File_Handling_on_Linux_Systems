# File_Handling_on_Linux_Systems
C examples for opening, reading, and managing files on Linux systems.


This project demonstrates how to manipulate files in C on Linux systems.  
Each example covers a different operation such as writing binary data, reading file contents, determining file size, and counting characters.

These examples are useful for learning low-level file access, commonly used in Linux systems programming and embedded development.



---

# 📄 Program Descriptions

## ✅ 1. **main_1.c**
**Purpose:** Write a string into a binary file.

This program:
- Opens a binary file using `fopen()` with the `"wb"` mode.
- Writes the string `"This is a test"` using `fwrite()`.
- Checks whether the write operation succeeded.
- Closes the file afterward.

**Main concepts:**  
`fopen()`, `fwrite()`, string length, binary write validation.

---

## ✅ 2. **main_2.c**
**Purpose:** Read data from a binary file and verify its content.

This program:
- Opens the file using `"rb"`.
- Uses `fseek()` and `ftell()` to get the file size.
- Reads the entire file into a buffer using `fread()`.
- Compares the content to `"This is a test"`.
- Prints the result if successful.

**Main concepts:**  
`fread()`, `fseek()`, `ftell()`, buffers, binary comparison.

---

## ✅ 3. **main_3.c**
**Purpose:** Count the number of characters in a text file.

This program:
- Opens a text file in `"r"` mode.
- Reads characters one at a time using `fgetc()`.
- Increments a counter until EOF is reached.
- Prints the total number of characters read.

**Main concepts:**  
`fgetc()`, EOF handling, character loops.

---

# 🧠 What You Learn

- Opening files (`r`, `rb`, `wb`)
- Writing binary data
- Reading binary data
- Getting file size using `fseek()` / `ftell()`
- Reading files character by character
- Error checking for file operations
- Buffer usage and string comparison

---
