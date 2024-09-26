# Road-Test-Report-Generator 🛣️

A **GUI-based application** built using **Qt Designer** and **C++** that generates PDF reports from input data on various tests conducted on highway materials. This project was developed by **Ayush Sahu**, **Divyam Tiwari**, and **Atharv Nagar** for the **Civil Department of IIT Tirupati**.

***Documentation available here***: https://divyam27-1.github.io/road-test-report-generator/

***How to learn Qt***: https://youtube.com/playlist?list=PLS1QulWo1RIZiBcTr5urECberTITj7gjA&si=H27-NFMBCNor7qYy

## Project Overview

The Road-Test-Report-Generator is designed to streamline the process of documenting test results on highway materials. The application allows users to input test data through a graphical interface and automatically generates a professional report in PDF format.

### Key Features

- **Graphical User Interface**: Developed using **Qt Designer** for ease of use.
- **Input Validation**: Ensures accurate data entry for highway material tests.
- **PDF Report Generation**: Automatically generates well-formatted PDF reports using **wkhtmltopdf**.
- **Customizable Test Fields**: Users can input data for various types of tests conducted on materials like asphalt, concrete, etc.
- **Material-Specific Reports**: Tailors reports according to the type of material being tested.

## Technologies Used

- **C++**: Core programming language for the application logic.
- **Qt Designer**: Used for designing the graphical user interface (GUI).
- **Qt Framework**: For implementing the GUI functionality.
- **wkhtmltopdf**: For generating the PDF reports from HTML content.

## Installation and Setup

### Prerequisites

- **C++ compiler** (e.g., g++, Visual Studio).
- **Qt Framework**: Ensure that Qt is installed on your system to run the application.
- **wkhtmltopdf**: Install **wkhtmltopdf** to handle PDF generation.
  
  To install **wkhtmltopdf**:
  - On Ubuntu:
    ```bash
    sudo apt-get install wkhtmltopdf
    ```
  - On Windows or macOS, download it from the [official site](https://wkhtmltopdf.org/downloads.html).

### Setup Instructions

1. **Clone the repository**:

   ```bash
   git clone https://github.com/yourusername/road-test-report-generator.git
   cd road-test-report-generator

### Open the project in Qt Creator:

- Launch Qt Creator and open the .pro file of the project.
- Ensure all dependencies are installed and linked.
- Install wkhtmltopdf (if not installed).

### Build and Run the project

- Click on the Build button to compile the project.
- Run the application from Qt Creator, or use the generated executable.

### How It Works

1. **Input Test Data**: Users can input data for tests on various highway materials via the GUI. Fields include parameters like material strength, density, and quality measures.
2. **Generate PDF Report**: After entering the data, users can click the "Generate Report" button, which uses wkhtmltopdf to convert the report from HTML format into a professionally formatted PDF.
3. **Save and Export**: The generated PDF report can be saved locally and used for further documentation or submission.

### Authors

Ayush Sahu -[ GitHub](https://github.com/Ayushman601)

Divyam Tiwari-[ GitHub](https://github.com/divyam27-1)

Atharv Nagar-[ GitHub](https://github.com/Atharvnagar007)

