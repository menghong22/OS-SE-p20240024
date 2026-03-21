# OS Lab 1 Submission: Linux Fundamentals

- **Student Name:** Chin Menghong
- **Student ID:** p20240024
- **Date:** March 2026

---

## Task 1: Operating System Identification
**Observation:** I confirmed that I am running Linux on a **MacBook Air M2 (ARM64 architecture)**. By running `uname -a`, I observed the kernel version and the hardware platform. Since this is an Apple Silicon chip, the architecture shows as `aarch64`.

---

## Task 2: Essential Linux File and Directory Commands
**Observation:** I practiced creating a directory structure using `mkdir` and generating files with `touch`. I moved files between directories using `mv` and successfully deleted them using `rm`. This confirmed that Linux handles everything as a file or a directory.



---

## Task 3: Package Management Using APT
**Observation:** I learned the critical difference between `remove` and `purge`. 
- **Remove:** Uninstalled the `mc` (Midnight Commander) program but kept the configuration files in `/etc/mc`.
- **Purge:** Completely wiped both the program and its configuration files.
*Task1-3*

![Task 1-3 Challenge](./images/task1-3.png)


---

## Task 4: Programs vs Processes (Single Process)
**Observation:** By running `sleep 120 &`, I moved a program into the "background," turning it into an active process. Using the `ps` command, I was able to locate its **PID (Process ID)** while still being able to use my terminal for other tasks.


---

## Task 5: Installing Real Applications & Observing Multitasking
**Observation:** I demonstrated multitasking by running a Python-based web server and the sleep process simultaneously. The `ps aux` command showed multiple background tasks sharing the system resources at once.

---

## Task 6: Virtualization and Hypervisor Detection
**Observation:** Running `systemd-detect-virt` confirmed that my system is running in a **Virtual Machine** environment. Since I am on a MacBook M2, the hypervisor (like UTM or VMware) allows Linux to run on top of macOS.
*Task 4-6*
![Task 4-6](./images/task4-6.png)