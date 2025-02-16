# Hospital Management System (HMS) 🚑

## Overview
The **Hospital Management System (HMS)** is a simple yet efficient C++ program designed to manage patient queues in a hospital. It utilizes a linked list to store and process patient information, ensuring smooth operations for patient admission, retrieval, and display.

## Features
- 📌 **Add Patients**: Supports adding normal and critical patients.
- 🔍 **Search Patients**: Prevents duplicate entries by checking existing patient IDs.
- 📄 **List Patients**: Displays all patients with structured formatting.
- 🏥 **Process Patients**: Retrieves and removes the first patient in the queue.
- 🖥 **Menu-Driven Interface**: Simplifies user interaction with an intuitive menu.

## Technologies Used
- **C++** (Object-Oriented Programming)
- **Linked List** (for dynamic patient management)
- **Standard Input/Output** (cin, cout, getline, setw for formatted display)

## Installation & Usage
### Prerequisites
- A C++ compiler (e.g., GCC, MinGW, or MSVC)

### Steps to Run
1. Clone the repository:
   ```sh
   git clone https://github.com/yourusername/hms.git
   cd hms
   ```
2. Compile the program:
   ```sh
   g++ main.cpp -o hms
   ```
3. Run the program:
   ```sh
   ./hms
   ```

## How It Works
1. **Add Normal Patient** – Inserts a patient at the end of the queue.
2. **Add Critically Ill Patient** – Inserts a patient at the beginning of the queue.
3. **Take Patient to Doctor** – Removes and processes the first patient in the queue.
4. **Display Patient List** – Shows all patients in a formatted table.
5. **Exit** – Closes the system.

## Example Output
```
Department: Emergency
1. Add normal patient
2. Add critically ill patient
3. Take patient to doctor
4. Display patient list
5. Exit
Enter your choice: _
```

## Contribution
Contributions are welcome! To contribute:
1. Fork the repository.
2. Create a new branch (`git checkout -b feature-branch`).
3. Commit your changes (`git commit -m "Added new feature"`).
4. Push to the branch (`git push origin feature-branch`).
5. Create a Pull Request.

## License
This project is licensed under the MIT License. See `LICENSE` for details.

## Contact
For any issues or feature requests, open an issue or reach out via email at **your.email@example.com**.

---
Developed with ❤️ in C++
