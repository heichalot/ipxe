#define PXE_MENU
//#define PXE_STACK #pxe_stack doesn't work

#define CONSOLE_FRAMEBUFFER
#define CONSOLE_CMD
#define IPSTAT_CMD
#define LOTEST_CMD
#define NEIGHBOUR_CMD
#define NSLOOKUP_CMD
#define NTP_CMD
#define PARAM_CMD
#define PING_CMD
#define PCI_CMD
#define POWEROFF_CMD
//#define PXE_CMD
#define REBOOT_CMD
#define SHELL_CMD
#define TIME_CMD
#define VLAN_CMD

//#define IMAGE_BZIMAGE bzimage doesn't work
//#define IMAGE_COMBOOT #comboot doesn't work
#define IMAGE_EFI
//#define IMAGE_ELTORITO
//#define IMAGE_ELF #ELF doesn't work
//#define IMAGE_MULTIBOOT #multiboot doesn't work
//#define IMAGE_NBI #nbi doesn't work
//#define IMAGE_PXE #pxe doesn't work
#define IMAGE_SCRIPT
//#define IMAGE_SDI #sdi doesn't work

#define DOWNLOAD_PROTO_FILE
#define DOWNLOAD_PROTO_FTP
#define DOWNLOAD_PROTO_HTTP
#define DOWNLOAD_PROTO_HTTPS
#define DOWNLOAD_PROTO_NFS
#define DOWNLOAD_PROTO_TFTP

#define SANBOOT_PROTO_HTTP
#define SANBOOT_PROTO_ISCSI

#undef BANNER_TIMEOUT
#define BANNER_TIMEOUT 40

#undef ROM_BANNER_TIMEOUT
#define ROM_BANNER_TIMEOUT ( 2 * BANNER_TIMEOUT )
