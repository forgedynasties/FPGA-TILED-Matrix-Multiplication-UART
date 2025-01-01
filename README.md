# FPGA Matrix Multiplier Using UART

## Overview

This project implements a hardware-based matrix multiplier on an FPGA, leveraging a **5x5 grid of Multiply-Accumulate (MAC) units** for efficient computation. The design supports matrix multiplication for both **3x3** and **10x10** matrices. For larger matrices, the **tiling technique** is used to partition the computation into smaller manageable chunks.

Communication with the FPGA is facilitated using a **UART (Universal Asynchronous Receiver-Transmitter)** interface, allowing the input matrices to be sent and the results to be received seamlessly.

---

## Features

1. **5x5 Grid of MAC Units**:
   - The hardware uses a grid of 25 MAC units for parallelized computation, ensuring efficiency and high-speed processing.

2. **Matrix Size Support**:
   - Supports multiplication of:
     - Small matrices: 3x3
     - Large matrices: 10x10 (via tiling)

3. **Tiling Technique**:
   - For matrices larger than the 5x5 hardware grid (e.g., 10x10), the computation is divided into smaller tiles.
   - Each tile is processed sequentially, and the intermediate results are combined to produce the final output.

4. **UART Interface**:
   - Input matrices are sent to the FPGA through a UART interface.
   - The computed results are transmitted back via UART for further processing or verification.

---

## System Architecture

### 1. **Hardware Design**:
   - A 5x5 grid of MAC units computes matrix multiplication efficiently.
   - Pipeline stages ensure parallelism and minimize computation time.

### 2. **UART Communication**:
   - Input: Send matrix data via UART in a predefined format.
   - Output: Receive the result matrix through the UART interface.

### 3. **Tiling for 10x10 Multiplication**:
   - Break the matrices into smaller 5x5 submatrices.
   - Perform multiplication on submatrices.
   - Accumulate the results to generate the final 10x10 matrix.

---

## Usage

### Prerequisites
- **FPGA Development Board**: Spartan 3 or compatible board.
- **UART Interface**: Software or hardware terminal to communicate with the FPGA.
- **Matrix Format**: Matrices must be provided in a specific serialized format.

### Input Format
Matrices should be sent as a serialized stream over UART:
- Matrix A: `[A11, A12, ..., A1n, ..., An1, ..., Ann]`
- Matrix B: `[B11, B12, ..., B1n, ..., Bn1, ..., Bnn]`

### Output Format
The result matrix will be received as a serialized stream:
- Result: `[C11, C12, ..., C1n, ..., Cn1, ..., Cnn]`

### Steps to Run
1. Load the Verilog/VHDL design onto the FPGA using your preferred development environment.
2. Establish a UART connection to the FPGA.
3. Send the input matrices through UART.
4. Receive the result matrix via UART and reconstruct it.

---

## Tiling Example: 10x10 Matrix Multiplication

1. **Input Matrices**:
   - Two 10x10 matrices to be multiplied.

2. **Process**:
   - Partition matrices into 5x5 tiles:
     - Matrix A → 4 tiles: `A11, A12, A21, A22`
     - Matrix B → 4 tiles: `B11, B12, B21, B22`
   - Compute submatrices for the result:
     - `C11 = A11 * B11 + A12 * B21`
     - `C12 = A11 * B12 + A12 * B22`
     - `C21 = A21 * B11 + A22 * B21`
     - `C22 = A21 * B12 + A22 * B22`
   - Combine results to form the final 10x10 matrix.

3. **Output**:
   - Final 10x10 result matrix transmitted over UART.

---

## Future Improvements

- Expand to support larger matrix sizes (e.g., 20x20) with hierarchical tiling.
- Optimize MAC grid for higher FPGA resource efficiency.
- Implement an error-correcting protocol for UART communication.

