1. Set the environment variables

   Following tools is needed:
     - verilator 
     - gtkwave   
     - sparc cross-compiler 

   To use these tools, you need to set the environment variables
   LD_LIBRARY_PATH and PATH.


2. Building/Running the simulator code

   Following are the commands to build and run the code:

   > make       // build code
   > make run   // run code

   The result of running the code will be a 'trace.vcd' waveform
   file. It can be viewed using 'gtkwave' (see instructions below).

   To change the program binary which you are decoding, edit the
   following line in Makefile:
   
   RUNELF=...


3. Viewing the trace.vcd waveform

   The waveforms can be viewd using the following command:

   > gtkwave trace.vcd


4. Compiling sparc programs

   A complete cross-compilation tool-chain is used to compile and use
   the sparc programs.  In addition to the
   compiler, the tool-chain contains the other typical gcc tools such
   as disassembler, linker, etc.  For exmaple, the disassembler can be used 
   to get a complete listing of the instructions in a program.

   The compiler should be used to write test programs.
   Some example programs and a makefile in './sparc-prog'
   subfolder is given.

   For the cross compiler, a special version of libc
   called 'diet libc' is used. 

5. Testing sparc programs with 'qemu-sparc'

   A user-mode simulator for sparc binaries is
   provided to allowing to test sparc binaries.  It can be run
   like this (after sourcing the bash/csh scripts mentioned above):

   > qemu-sparc <path-to-sparc-program> <program-arguments...>

   'qemu-sparc' is based on the powerful emulation/virtual-machine
   tool Qemu and has lots of feature that can come handy.  For
   example, for knowing the list of system calls the sparc
   program makes, run

   > qemu-sparc -strace <path-to-sparc-program> <program-arguments...>


6. sparc-linux system call emulation
  
   The simulation environment emulates a Linux OS running on a sparc
   machine.  In other words, sparc-linux is the target system for the
   test programs.  This means that a test program, every once in a
   while, will make a system call that should be handled as if the
   program is running on a sparc-linux machine.  The simulation
   environment provides a function called 'cse502_syscall()' that calls
   from within the SystemVerilog code when the processor
   needs to execute a system call instruction.  The call will then be
   handled by the system-call emulation code (provided in the
   folder './sparc-linux').  Note that the system-call emulation
   is partial and only a (commonly used) subset of the Linux
   system-calls are currently supported.  The
   'sparc-linux/syscall.c' lists the system calls that are
   currently (un)supported, and the 'qemu-sparc -strace'
   command mentioned above can be used to figure out the system calls
   made by the test programs.

   
