## System software and oeprating system

| Feature           | System Software                                                                                          | Operating System (OS)                                                                                                |
| ----------------- | -------------------------------------------------------------------------------------------------------- | -------------------------------------------------------------------------------------------------------------------- |
| **Definition**    | A set of programs that manage computer hardware and provide a platform for running application software. | A type of system software that acts as an intermediary between hardware and the user/applications.                   |
| **Purpose**       | To manage hardware resources and provide services to application software.                               | To control and coordinate hardware, manage files, processes, memory, and provide a user interface.                   |
| **Examples**      | Operating systems, device drivers, utility programs, compilers, assemblers.                              | Windows, Linux, macOS, Android, iOS.                                                                                 |
| **Scope**         | Broad category that includes OS and other system-level software.                                         | A specific component of system software.                                                                             |
| **Functionality** | Provides basic functions like file management, hardware control, and program execution environment.      | Provides core functions like process management, memory management, device management, security, and user interface. |

> OS works on top os System software , to manage resouces/hardware for different user/applications .

# An operating system  : 
is a piece of software that manages all the resources of a computer system,both hardware and software, and provides an environment in which the user can execute his/her programs in a convenient and efficient manner by hiding underlying complexity of the hardware and acting as a resource manager.

> Device Driver = A special type of system software that allows the operating system (OS) to communicate with hardware devices.

## Why OS?
1. Bulky and complex app. (Hardware interaction code must be in app’s code base)
2. Resource exploitation by 1 App.
3. No memory protection.

## what is an OS made up of?
 - Collection of system software.

## Hierarchy :
- User
- Application programs
- Operating system
- Computer hardware

## OS Functions :
An operating system function -
- Access to the computer hardware.
- interface between the user and the computer hardware
- Resource management (Aka, Arbitration) (memory, device, file, security, process etc)
- Hides the underlying complexity of the hardware. (Aka, Abstraction)
- facilitates execution of application programs by providing isolation and protection.

## OS goals –
• Maximum CPU utilization
• Less process starvation
• Higher priority job execution

## Types:

1. Single process OS :  only 1 process executes at a time from the ready queue. [Oldest]

2. Batch-processing OS:
Example:
- If multiple users submit programs written in FORTRAN, COBOL, or Assembly, they are collected, sorted, and run together as a batch to save setup and processing time.

### ⚙️ Working of Batch OS
- Job Submission – Users submit their jobs (programs, data, commands) to an operator on punched cards or magnetic tape.
- Batch Formation – The operator groups similar jobs into a batch.
- Job Execution – The system executes jobs one after another automatically.
- Output Collection – After completion, the system writes output (like printed reports) to an output device for later retrieval.

3. Multiprogramming Operating System
- 🔁 Working of Multiprogramming OS
    - The Operating System keeps several jobs in main memory simultaneously.
    - The Job Scheduler (queue or smthing) selects one job to run.
    - When that job performs an I/O operation, the CPU switches to another job.
    - This context switching continues, so the CPU is always busy doing useful work.

- ⚠️ Disadvantages
    - ❌ Complex OS design — requires advanced scheduling and memory management.
    - ❌ More memory required to hold multiple jobs.
    - ❌ Security and protection challenges (since jobs share memory).
    - ❌ Difficult debugging due to concurrent execution.
- 💻 Examples
    - UNIX, Linux, Windows, and macOS (modern OSes are multiprogrammed).
    - Mainframe systems like IBM OS/360 introduced multiprogramming in the 1960s.

## Process Control Block (PCB)
- A Process Control Block (PCB) is a data structure maintained by the operating system (OS) that contains all the information about a specific process.
It is sometimes called the process descriptor.
- During context switching, the OS saves the state of the current process in its PCB and loads another process’s PCB — allowing processes to resume correctly later.
```yml
Process Control Block (PCB)
 ├── Process ID: 123
 ├── Process State: RUNNING
 ├── Program Counter: 0x004023
 ├── CPU Registers: { R1=10, R2=25, ... }
 ├── Memory Info: { Base=0x2000, Limit=0x4000 }
 ├── Priority: 5
 ├── Open Files: [input.txt, output.txt]
 └── Accounting Info: { CPU Time=120ms }
```

4. Multitasking Operating System
 allows multiple tasks (processes or programs) to run apparently at the same time by rapidly switching the CPU among them.
- 🌀 The OS uses CPU scheduling and context switching to give the illusion of parallel execution.

- ⚙️ How Multitasking Works
    - The OS keeps multiple processes in main memory.
    - The CPU executes a small portion of each process (called a time slice).
    - When the time slice expires or a process waits for I/O, the CPU switches to another task.
    - This switching happens so quickly that users feel like all tasks are running simultaneously.

- ⚠️ Disadvantages
    - ❌ Possibility of deadlock – if multiple processes wait on shared resources.
    - ❌ Security risks – processes must be isolated properly.


5. ⚙️ Multiprocessor Operating System
A Multiprocessor Operating System is an OS designed to control and coordinate multiple CPUs (processors) working together within a single computer system.

- All CPUs share:
    - A common main memory
    - A shared clock
    - A single operating system instance
- The OS manages load balancing, process scheduling, and resource sharing between all processors.

- 🧮 Example Systems
    - Modern OS: Windows Server, Linux, UNIX, macOS (SMP systems)
    - Supercomputers: IBM Power Systems, Cray, Sun Microsystems servers
    - Embedded systems: Automotive and robotics controllers using AMP

| Type                                    | Description                                                                             | Example                                  |
| --------------------------------------- | --------------------------------------------------------------------------------------- | ---------------------------------------- |
| **1. Symmetric Multiprocessing (SMP)**  | All processors share memory equally and run the same OS. Each can perform any task.     | Modern PCs, Servers, Linux, Windows      |
| **2. Asymmetric Multiprocessing (AMP)** | One processor is the master that controls others (slaves) which perform assigned tasks. | Early mainframes, embedded systems       |
| **3. NUMA (Non-Uniform Memory Access)** | Memory is divided; each processor has its own local memory for faster access.           | High-performance servers, supercomputers |


6. 🌐 Distributed Operating System
- A Distributed Operating System (Distributed OS) manages a group of independent computers and makes them appear to users as a single, unified system.
- But in a distributed system, each computer (called a node) has its own memory and CPU, connected via a network.

- ⚠️ Disadvantages
    - ❌ Security issues – Network-based systems are more vulnerable.
    - ❌ Network dependency – Failure in network affects the whole system.
    - ❌ Debugging difficulty – Distributed bugs are harder to trace.

7. Real-Time Operating System (RTOS) 
- is a type of operating system designed to process data and execute tasks within a strict time limit (deadline).

