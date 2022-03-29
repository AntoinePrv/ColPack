/*******************************************************************************
    This file is part of ColPack, which is under its License protection.
    You should have received a copy of the License. If not, see 
    <https://github.com/CSCsw/ColPack>
*******************************************************************************/

#ifndef DEFINITION_H
#define DEFINITION_H

#if defined (_WIN32) || defined (__WIN32) || defined (__WIN32__) || defined (WIN32) //Windows OS Predefined Macros
#define ____WINDOWS_OS____
#endif

#define STEP_DOWN(INPUT) ((INPUT) - 1)
#define STEP_UP(INPUT) ((INPUT) + 1)

#define _INVALID -2
#define _UNKNOWN -1

#define _OFF 0
#define _ON 1

#define DISJOINT_SETS true

#define STATISTICS true

#ifndef ____WINDOWS_OS____
/// UNIX only.  Used to measure longer execution time.
/** Define SYSTEM_TIME to measure the execution time of a program which may run for more than 30 minutes
(35.79 minutes or 2,147 seconds to be accurate)
Reason: In UNIX, CLOCKS_PER_SEC is defined to be 1,000,000 (In Windows, CLOCKS_PER_SEC == 1,000).
The # of clock-ticks is measured by using variables of type int => max value is 2,147,483,648.
Time in seconds = # of clock-ticks / CLOCKS_PER_SEC => max Time in seconds = 2,147,483,648 / 1,000,000 ~= 2,147
*/
#define SYSTEM_TIME
#else
#undef SYSTEM_TIME
#endif

//define system-dependent directory separator
#ifndef ____WINDOWS_OS____
#define DIR_SEPARATOR "/"
#else
#define DIR_SEPARATOR "\\"
#endif

//#define DEBUG _UNKNOWN
//#define DEBUG 5103

// definition for variadic Graph...Interface()
#define SRC_WAIT -1
#define SRC_FILE 0
#define SRC_MEM_ADOLC 1
#define SRC_MEM_ADIC 2
#define SRC_MEM_SSF 3
#define SRC_MEM_CSR 4

#endif
