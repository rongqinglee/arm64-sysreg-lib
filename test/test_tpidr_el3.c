

#include "sysreg/tpidr_el3.h"


u64 test_read_tpidr_el3( void )
{
    return read_tpidr_el3().Thread_ID;
}


void test_unsafe_write_tpidr_el3( void )
{
    unsafe_write_tpidr_el3((union tpidr_el3){ .Thread_ID=1 });
}


void test_safe_write_tpidr_el3( void )
{
    safe_write_tpidr_el3( .Thread_ID=1 );
}


void test_read_modify_write_tpidr_el3( void )
{
    read_modify_write_tpidr_el3( .Thread_ID=1 );
}

