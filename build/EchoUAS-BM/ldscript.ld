/* generated ldscript.ld */
MEMORY
{
    flash : org = 0x08000000, len = 36K
    ram0  : org = 0x20000100, len = 65280
}

INCLUDE common.ld
