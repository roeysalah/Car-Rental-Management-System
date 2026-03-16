# 🚗 Car Rental Management System

## 🎯 Introduction

The **Car Rental Management System** is an object-oriented C++ project designed to simulate the operations of a small car rental company.

The system demonstrates strong understanding of **Object-Oriented Programming (OOP)** concepts including **encapsulation, class design, modular architecture, and data management** using the **Standard Template Library (STL)**.

This project manages a collection of vehicles and allows users to perform typical rental operations such as adding cars, renting vehicles, returning them, and maintaining the inventory.

---

# 🧩 Project Overview

The system allows the user to:

- Add new cars to the rental system
- Display all available cars
- Rent cars to customers
- Return rented cars
- Remove cars from the system
- Track the availability status of vehicles
- Manage the rental inventory using a menu-driven interface

The application is designed as a **console-based management system** where all operations are performed through a structured command-line menu.

---

# 🏗️ Object-Oriented Design

The project follows a **modular object-oriented architecture**, where each class is responsible for managing a specific component of the system.

---

## 🚗 1. `Car`

Represents a single vehicle in the rental system.

### Data
- `carID` – unique identifier of the vehicle
- `model` – car model name
- `available` – availability status of the vehicle

### Key Responsibilities
- Store the details of a car
- Track whether the car is currently rented
- Provide access to car information

### Typical Methods
- `getID()`
- `getModel()`
- `isAvailable()`
- `rentCar()`
- `returnCar()`
- `printDetails()`

---

## 🗂️ 2. `RentalSystem`

This class manages the **entire car rental inventory**.

### Data
- `vector<Car>` containing all cars in the system

### Responsibilities
- Add cars to the system
- Remove cars
- Rent vehicles
- Return vehicles
- Display available cars

### Core Methods
- `addCar()`
- `removeCar()`
- `rentCar()`
- `returnCar()`
- `showCars()`

The class acts as the **central controller** for all rental operations.

---

## 🖥️ 3. `Main Program`

The program entry point is located in **main.cpp**.

### Responsibilities

- Initialize the rental system
- Display the menu
- Process user input
- Execute rental operations

The main program interacts with the **RentalSystem class** to perform all actions.

---

# 🖥️ Program Flow

1. The program starts from **main.cpp**.
2. A **RentalSystem** object is created.
3. The system displays a **menu-driven interface**.
4. The user selects an option.
5. The system performs the requested operation.
6. The process continues until the user selects **Exit**.

---

# 📋 Menu Interface

Example menu displayed to the user:


===== Car Rental System =====

Add Car

Show Cars

Rent Car

Return Car

Remove Car

Exit


Each option triggers the corresponding operation inside the **RentalSystem** class.

---

# ⚙️ Compilation and Execution

## 🧱 Compile


g++ main.cpp Car.cpp RentalSystem.cpp -o car_rental


## ▶️ Run


./car_rental


---

# 🧠 Object-Oriented Concepts Used

This project demonstrates the following programming concepts:

- **Encapsulation**
- **Class-based architecture**
- **Modular design**
- **Separation of responsibilities**
- **Vector containers (STL)**
- **Menu-driven program structure**

---

# 📁 Project Structure


Car-Rental-Management-System/
│
├── Car.cpp
├── Car.h
├── RentalSystem.cpp
├── RentalSystem.h
├── main.cpp
└── README.md


---

# 🚀 Possible Future Improvements

The system can be extended with several advanced features:

- Customer management system
- File-based data persistence
- Database integration (SQLite / PostgreSQL)
- Graphical user interface (GUI)
- Online reservation system
- Client-server architecture for distributed rentals

---
