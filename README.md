# csd_test_1

## Project Structure and Hierarchy

This project implements a Linked List data structure in C++.

### File Hierarchy

- **LinkedList.h / LinkedList.cpp**: 
  - Defines the `LinkedList` class.
  - Manages a singly linked list of nodes.
  - Provides functionality to insert values at the end and print the list.
  - Contains a private `Node` structure.

- **ThreeListIterator.h / ThreeListIterator.cpp**:
  - Defines the `ThreeListIterator` class.
  - Designed to handle operations involving three separate `LinkedList` objects.
  - Contains a method `iterateAndPrint` (implementation details in .cpp).

- **main.cpp**:
  - The entry point of the application.
  - Demonstrates the usage of the `LinkedList` class.
  - Creates three instances of `LinkedList`, populates them with sample integers, and prints their contents.

### Build Information
This project is set up as a Visual Studio solution, but the project files (`.sln`, `.vcxproj`) are excluded from the repository to keep it clean.
