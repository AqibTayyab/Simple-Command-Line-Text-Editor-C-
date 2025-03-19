# Simple Command-Line Text Editor (C)

## Description
This is a simple command-line text editor written in C, similar to Nano. It allows users to open, edit, and save text files directly from the terminal. This program provides basic text editing functionality, making it lightweight and easy to use.

## Purpose
The purpose of this project is to demonstrate file handling in C, providing a minimalistic text editor for quick modifications to text files. It can be useful for learning purposes or as a simple alternative to complex text editors.

## Features
- Open and display a text file
- Edit specific lines in the file
- Save changes to the file
- Quit the editor

## How It Works
1. The program takes a filename as a command-line argument.
2. It loads the file content into memory (if the file exists).
3. The user can view, edit, and save the text.
4. Commands allow the user to modify specific lines and save changes.

## How to Use

### 1. Clone the Repository
```sh
$ git clone https://github.com/AqibTayyab/Simple-Command-Line-Text-Editor-C-.git
$ cd Simple-Command-Line-Text-Editor-C-
```

### 2. Compile the Code
```sh
$ gcc main.c -o main
```

### 3. Run the Editor
```sh
$ ./text_editor filename.txt
```
If `filename.txt` does not exist, it will be created when saved.

### 4. Commands
- `e` - Edit a specific line
- `s` - Save changes to the file
- `q` - Quit the editor

## Example Output
```sh
--- Text Editor ---
1: Hello, this is a sample text file.
2: You can edit this file using the editor.
-------------------
Enter command (e: edit, s: save, q: quit): e
Enter line number to edit: 2
Enter new text: This is an updated line.
Enter command (e: edit, s: save, q: quit): s
File saved successfully.
Enter command (e: edit, s: save, q: quit): q
Exiting editor.
```

## Contributions
Contributions are welcome! Feel free to submit issues or pull requests.

## License
This project is open-source and available under the MIT License.

---
Created by AqibTayyab
