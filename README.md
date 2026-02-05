# Smart City Route Optimization System

A **graph-based route optimization system** implemented in **C++**, designed to compute the shortest path between city locations. This project models real-world road networks as weighted graphs and applies **Dijkstra’s Algorithm** with priority queues for efficient pathfinding.

---

## 🚦 Project Overview

Modern smart cities rely on efficient routing for navigation, logistics, and emergency response. This project simulates a city road network where:

* Locations are represented as **nodes**
* Roads are represented as **weighted edges** (distance/cost)

The system computes the **shortest route and total distance** between a source and destination node using an optimized graph algorithm.

---

## 🎯 Key Features

* Graph representation using **adjacency lists**
* Efficient shortest-path computation using **Dijkstra’s Algorithm**
* Priority queue–based optimization for faster performance
* Outputs both **minimum distance** and **actual route path**
* Command-line driven input for flexibility

---

## 🧠 Algorithm Used

### Dijkstra’s Algorithm

* Greedy shortest-path algorithm
* Suitable for weighted graphs with non-negative edge weights
* Time complexity optimized using a **min-heap (priority queue)**

This makes it ideal for modeling **real-world city road networks**.

---

## 🏗️ System Design

* **Data Structure:**

  * `unordered_map<string, vector<pair<string, int>>>` for adjacency list
* **Nodes:** City locations (e.g., A, B, C, D)
* **Edges:** Roads with distance as weight

---

## 📁 Project Structure

```
Smart-City-Route-Optimization/
│
├── main.cpp      # Complete implementation
├── README.md
```

---

## ▶️ How to Compile and Run

### 1️⃣ Compile

```bash
g++ main.cpp -o route_optimizer
```

### 2️⃣ Run

```bash
./route_optimizer A D
```

### 3️⃣ Sample Output

```
Distance: 3
Path: A -> C -> D
```

---

## 🔢 Example Graph Used

The sample city map includes:

* A ↔ B (4)
* A ↔ C (2)
* B ↔ D (5)
* C ↔ D (1)

This demonstrates how the system chooses the **optimal path** instead of the shortest hop count.

---

## 💡 Real-World Applications

* Smart city navigation systems
* GPS and mapping services
* Logistics and delivery route planning
* Emergency vehicle routing

---

## 🚀 Future Enhancements

* Support for directed graphs (one-way roads)
* Dynamic traffic-based edge weights
* Integration with real map data
* Visualization of routes

---

## 👤 Author

**Utsav Kashyap**
data Scientist
C++ | Data Structures | Algorithms

---

⭐ If you find this project useful, consider starring the repository!
