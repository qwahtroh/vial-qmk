# MCU name
MCU = atmega32u4

# Build Options
#   change yes to no to disable

BOOTMAGIC_ENABLE = yes       # Virtual DIP switch configuration
EXTRAKEY_ENABLE = yes       # Audio control and System control
NKRO_ENABLE = yes           # USB Nkey Rollover
VIAL_INSECURE = yes 

# Enter lower-power sleep mode when on the ChibiOS idle thread
OPT_DEFS += -DCORTEX_ENABLE_WFI_IDLE=TRUE
