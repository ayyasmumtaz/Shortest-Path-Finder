# Shortest Path Finder at IPB University Dramaga Bogor

This repository contains the implementation of a Shortest Path Finder system at IPB University Dramaga Bogor. The system is designed to provide users with the shortest path between different locations within the university campus. It utilizes various data structures and algorithms, such as arrays, priority queues, and the Dijkstra's algorithm, to efficiently calculate and display the shortest path.

## Technology Stack

The implementation of the Shortest Path Finder system involves the following technologies:

- Programming Language: C++
- User Interface: HTML and JavaScript
- Backend: Node.js
- GUI (Graphical User Interface)

The core functionality and algorithms are developed in C++, which provides the necessary data structures and logic to calculate the shortest path. The system uses an array-based representation of the graph, allowing efficient storage and retrieval of node and edge information. A priority queue data structure is utilized to determine the next node with the shortest distance during the path calculation process.

For the user interface, HTML and JavaScript are used to create an interactive and user-friendly interface. The user can input their desired locations and visualize the shortest path on a graphical map representation. The Node.js backend server acts as the bridge between the user interface and the C++ code. It handles user requests, processes the input, invokes the appropriate C++ functions for path calculation using Dijkstra's algorithm, and sends the results back to the user interface for display.

The system also incorporates a GUI component, which provides a graphical representation of the campus map and displays the shortest path to the user. The GUI is developed using a library such as Qt or GTK, enhancing the user experience and making it easier to interpret the results.

## Getting Started

To set up and run the Shortest Path Finder system locally, follow these steps:

1. Clone the repository: `git clone https://github.com/your-username/shortest-path-finder.git`
2. Navigate to the project directory: `cd shortest-path-finder`
3. Install the necessary dependencies: `npm install`
4. Start the server: `node server.js`
5. Access the application in your browser at `http://localhost:3000`

Please ensure that you have the required dependencies and tools installed on your system before running the application. Detailed instructions and additional configuration options can be found in the project's documentation.

## Structure and Implementation

The system's implementation revolves around the concept of graphs and the Dijkstra's algorithm for finding the shortest path. The graph data structure is represented using arrays, allowing efficient storage and retrieval of node and edge information. Priority queues are utilized to determine the next node with the shortest distance during the path calculation process.

The C++ code in this repository provides the necessary functions and classes to create and manipulate the graph, calculate the shortest path using Dijkstra's algorithm, and return the result. The HTML and JavaScript files handle the user interface, enabling users to input their desired locations and visualize the shortest path on a graphical map representation. The Node.js backend server acts as the bridge between the user interface and the C++ code, processing user requests, invoking the appropriate C++ functions, and sending the results back to the user interface for display.

## Team

This project is developed and maintained by a team of dedicated individuals from IPB University:

- Raka Irzan Alfian G6401211034
- Muhammad Irfan Satriya Dewanto G6401211118
- Ayyas Mumtaz Yudha G6401211146

Feel free to reach out to any team member if you have questions, suggestions, or feedback regarding the project.

## Contact
If you have any questions, suggestions, or feedback, please feel free to contact the development team at yazmumtaz@gmail.com. We appreciate your interest in the project and look forward to your contributions.

Contact: yazmumtaz@gmail.com
