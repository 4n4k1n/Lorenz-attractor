# Lorenz Attractor Visualization

A simple C program that simulates and visualizes the famous Lorenz attractor in your terminal.

![Lorenz Attractor](Screenshot%20From%202026-01-14%2022-24-14.png)

## What is the Lorenz Attractor?

The Lorenz attractor is a chaotic system discovered by Edward Lorenz in 1963. It shows how small changes in starting conditions can lead to dramatically different results over time (the "butterfly effect").

## How it Works

The program:
1. Starts at a point in 3D space (x=1, y=0, z=0)
2. Uses the Lorenz equations to calculate how the position changes
3. Updates the position continuously
4. Draws the path as a moving star in your terminal

## Building and Running

```bash
# Compile
gcc main.c -o lorenz

# Run
./lorenz
```

Press `Ctrl+C` to stop the program.

## The Math

The program uses these three equations (Lorenz equations):
- `dx/dt = σ(y - x)`
- `dy/dt = x(ρ - z) - y`
- `dz/dt = xy - βz`

Where:
- σ (sigma) = 10.0
- ρ (rho) = 28.0
- β (beta) = 8/3

These values produce the characteristic "butterfly" shape of the Lorenz attractor.

## Requirements

- GCC or any C compiler
- Unix-like terminal (Linux, macOS, WSL)
- Terminal that supports ANSI escape codes
