ENTRY(start)

SECTIONS
{
    . = 1M;

    .boot :
    {
        KEEP(*(.mutliboot_header))
    }

    .text :
    {
        *(.text)
    }
}