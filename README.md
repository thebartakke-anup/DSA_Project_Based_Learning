# DSA Project Based Learning

This repository currently contains a **stack-based virtual machine written in C**.
It is a small learning project that demonstrates core Data Structures and Algorithms concepts through bytecode execution.

## Project Overview

The VM executes a tiny instruction set and prints internal state after each operation, making it useful for understanding:

- Stack operations (LIFO behavior)
- Register-style variable storage (`A` to `Z`)
- Basic arithmetic execution flow
- Simple assembly-to-bytecode loading

## Repository Structure

```text
.
├── README.md
└── A C language based Virtual Machine
```

> `A C language based Virtual Machine` is the C source file.

## Instruction Set

Supported opcodes in the current implementation:

- `PSH <value>`: Push value onto stack
- `ADD`: Pop top two values, push sum
- `SUB`: Pop top two values, push difference
- `MUL`: Pop top two values, push product
- `PRN`: Print top of stack
- `SET <reg>`: Store top of stack into register index (`0 => A`, `1 => B`, ...)
- `LD <reg>`: Load register value onto stack
- `HLT`: Halt execution

## Build and Run

From the repository root:

```bash
gcc -x c -Wall -Wextra -std=c11 "A C language based Virtual Machine" -o vm
./vm
```

## Current Demo Program

The hardcoded sample program computes:

```text
(10 * 5) + 20 = 70
```

and prints detailed stack/register state at each step.
