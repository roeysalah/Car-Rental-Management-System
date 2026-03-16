# 🚗 Car Rental Management System

![C++](https://img.shields.io/badge/language-C%2B%2B-blue)
![OOP](https://img.shields.io/badge/paradigm-OOP-green)
![Status](https://img.shields.io/badge/status-Completed-brightgreen)

## 📖 Overview

The **Car Rental Management System** is a console-based application written in **C++** that simulates the management of a small car rental company.

The system allows users to manage vehicles, track car availability, and perform rental operations through a simple command-line interface.

This project demonstrates the use of **Object-Oriented Programming (OOP)**, modular design, and data management using C++.

---

## 🎯 Features

- Add new cars to the system  
- Display all cars in the inventory  
- Rent a car  
- Return a rented car  
- Remove cars from the system  
- Track car availability status  

---

## 🧠 Concepts Demonstrated

This project demonstrates several important software engineering concepts:

- Object-Oriented Programming (OOP)
- Class design and encapsulation
- Modular system architecture
- Menu-driven CLI applications
- Data management using C++ containers

---

## 🏗️ System Architecture

```mermaid
flowchart TD

A[User CLI Interface] --> B[Rental Management System]

B --> C[Car Class]
B --> D[Rental Operations]

C --> C1[Car ID]
C --> C2[Model]
C --> C3[Availability]

D --> D1[Add Car]
D --> D2[Rent Car]
D --> D3[Return Car]
D --> D4[Remove Car]
