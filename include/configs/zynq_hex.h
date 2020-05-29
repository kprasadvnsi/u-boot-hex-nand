#ifndef __CONFIG_ZYNQ_HEX_H
#define __CONFIG_ZYNQ_HEX_H

#define CONFIG_SYS_SDRAM_BASE	0x00000000
#define CONFIG_SYS_SDRAM_SIZE	0x40000000

#define CONFIG_SYS_NO_FLASH

#define CONFIG_SPL_NAND_ZYNQ

#define CONFIG_SYS_NAND_U_BOOT_OFFS	0x100000

#define CONFIG_SPL_NAND_SUPPORT
#define CONFIG_SPL_NAND_DRIVERS

#define CONFIG_SPL_NAND_INIT
#define CONFIG_SPL_NAND_TIMINGS
#define CONFIG_SPL_NAND_BASE
#define CONFIG_SPL_NAND_ECC
#define CONFIG_SPL_NAND_BBT
#define CONFIG_SPL_NAND_IDS

/* Load U-Boot to this address */
#define CONFIG_SYS_NAND_U_BOOT_DST	CONFIG_SYS_TEXT_BASE
#define CONFIG_SYS_NAND_U_BOOT_START	CONFIG_SYS_NAND_U_BOOT_DST

#define CONFIG_MTD

#define CONFIG_ENV_OFFSET	0x300000

#define CONFIG_BOOTP_SERVERIP

#define CONFIG_EXTRA_ENV_SETTINGS \
	"autoload=no\0" \
	"pxefile_addr_r=0x2000000\0" \
	"scriptaddr=0x3000000\0" \
	"kernel_addr_r=0x2000000\0" \
	"fdt_high=0xefff000\0" \
	"initrd_high=0xefff000\0" \
	"devnum=0\0" \
	"wdstop=mw f8005000 ABC000\0" \
	BOOTENV

#include <configs/zynq-common.h>

#endif /* __CONFIG_ZYNQ_HEX_H */