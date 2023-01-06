#ifndef GCC_TM_H
#define GCC_TM_H
#define TARGET_CPU_DEFAULT (((MASK_SINGLE_FLOAT|MASK_DIVIDE_BREAKS)|MASK_EXPLICIT_RELOCS)|MASK_RELAX_PIC_CALLS)
#ifndef TARGET_ENDIAN_DEFAULT
# define TARGET_ENDIAN_DEFAULT 0
#endif
#ifndef MIPS_ISA_DEFAULT
# define MIPS_ISA_DEFAULT 2
#endif
#ifndef MIPS_CPU_STRING_DEFAULT
# define MIPS_CPU_STRING_DEFAULT "allegrex"
#endif
#ifndef MIPS_ABI_DEFAULT
# define MIPS_ABI_DEFAULT ABI_EABI
#endif
#ifdef IN_GCC
# include "options.h"
# include "insn-constants.h"
# include "config/vxworks-dummy.h"
# include "config/elfos.h"
# include "config/mips/mips.h"
# include "config/mips/elf.h"
# include "config/mips/psp.h"
# include "config/initfini-array.h"
#endif
#if defined IN_GCC && !defined GENERATOR_FILE && !defined USED_FOR_TARGET
# include "insn-flags.h"
#endif
#if defined IN_GCC && !defined GENERATOR_FILE
# include "insn-modes.h"
#endif
# include "defaults.h"
#endif /* GCC_TM_H */
