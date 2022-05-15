# MCU name
MCU = atmega32u4

# Build Options
#   change yes to no to disable

MOUSEKEY_ENABLE = yes       # Mouse keys
EXTRAKEY_ENABLE = yes       # Audio control and System control
NKRO_ENABLE = yes           # USB Nkey Rollover
LTO_ENABLE = yes
ENCODER_ENABLE = yes

# Enter lower-power sleep mode when on the ChibiOS idle thread
OPT_DEFS += -DCORTEX_ENABLE_WFI_IDLE=TRUE
