## Components of OS
1. Kernel: A kernel is that part of the operating system which interacts directly with the hardware and performs the most crucialtasks.
    - a. Heart of OS/Core component
    - b. Very first part of OS to load on start-up.
- Functions : 
    - CPU scheduling
    - Memory management
    - Device control
    - System calls (interface between user programs and hardware)

2. User space: Where application software runs, apps don’t have privileged access to the underlying hardware. It interacts with kernel.
    - a. GUI
    - b. CLI

> A shell, also known as a command interpreter, is that part of the operating system that receives commands from the users and gets them executed.

## Types of Kernels:
1. Monolithic : 
- a. All functions are in kernel itself.
- b. Bulky in size.
- c. Memory required to run is high.
- d. Less reliable, one module crashes -> whole kernel is down.
- e. High performance as communication is fast. (Less user mode, kernel mode overheads)
- f. Eg. Linux, Unix, MS-DOS.

2. Micro Kernel
- a. Only major functions are in kernel.
    - i. Memory mgmt.
    - ii. Process mgmt.
- b. File mgmt. and IO mgmt. are in User-space.
- c. smaller in size.
- d. More Reliable
- e. More stable
- f. Performance is slow.
- g. Overhead switching b/w user mode and kernel mode.
- h. Eg. L4 Linux, Symbian OS, MINIX etc.


### why does it take time to switch between kernel and user mode
| Step | Action                    | Cost     |
| ---- | ------------------------- | -------- |
| 1    | Save user context         | Moderate |
| 2    | Load kernel context       | Moderate |
| 3    | Change privilege level    | High     |
| 4    | Flush pipeline and TLB    | High     |
| 5    | Perform system call logic | Variable |
| 6    | Return to user mode       | Moderate |


### 🧠 What is IPC?
- IPC (Inter-Process Communication) means the mechanisms that allow processes to communicate and share data with each other.
- Since each process in an OS runs in its own isolated memory space, they cannot directly access each other’s data.
- ➡️ So IPC provides safe, structured ways for processes to exchange information or synchronize actions.
- 🧩 Types of IPC Mechanisms
| Type                        | Description                                                                                | Example OS Function            |
| --------------------------- | ------------------------------------------------------------------------------------------ | ------------------------------ |
| **1️⃣ Pipes**               | One-way communication channel between related processes                                    | `pipe()`, `popen()` in Linux   |
| **2️⃣ Named Pipes (FIFOs)** | Like pipes, but can communicate between unrelated processes using a name in the filesystem | `/tmp/mypipe`                  |
| **3️⃣ Message Queues**      | Messages sent via a queue managed by the OS                                                | `msgget()`, `msgsnd()`         |
| **4️⃣ Shared Memory**       | Multiple processes access the same memory segment directly                                 | `shmget()`, `mmap()`           |
| **5️⃣ Semaphores**          | Used to synchronize processes (not exchange data)                                          | `semget()`, `sem_wait()`       |
| **6️⃣ Sockets**             | Enable communication between processes over a network or the same machine                  | `socket()`, `bind()`, `send()` |
| **7️⃣ Signals**             | Lightweight notifications for events                                                       | `kill(pid, SIGTERM)`           |

3. Hybrid Kernel
- Combines the performance of monolithic kernels with the modularity of microkernels.
- It runs most services in kernel space (like monolithic),
but keeps the structure modular and separate internally (like microkernel).
- Examples: Windows NT, XP, 10, 11 , macOS (XNU kernel) , iOS

> 🍏 macOS Kernel: XNU
- The kernel used by macOS is called XNU, which stands for:
- XNU = “X is Not Unix”
- It’s a hybrid kernel that combines the features of a monolithic kernel (like Linux) and a microkernel (like Mach).
```yml
+--------------------------------------+
|        User Space                    |
|  (Apps, GUI, Libraries, Frameworks)  |
+--------------------------------------+
|        BSD Layer                     |
|  - File system, networking, signals   |
|  - System calls (POSIX interface)     |
+--------------------------------------+
|        Mach Microkernel              |
|  - Task/thread scheduling             |
|  - Virtual memory & IPC               |
|  - Basic hardware abstraction         |
+--------------------------------------+
|        I/O Kit (Device Drivers)      |
|  - Dynamic driver loading             |
|  - Object-oriented driver model       |
+--------------------------------------+
|        Hardware                      |
+--------------------------------------+
```


