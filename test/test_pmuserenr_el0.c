

#include "sysreg/pmuserenr_el0.h"


u64 test_read_pmuserenr_el0( void )
{
    return read_pmuserenr_el0().en;
}


void test_unsafe_write_pmuserenr_el0( void )
{
    unsafe_write_pmuserenr_el0((union pmuserenr_el0){ .en=1 });
}


void test_safe_write_pmuserenr_el0( void )
{
    safe_write_pmuserenr_el0( .en=1 );
}


void test_read_modify_write_pmuserenr_el0( void )
{
    read_modify_write_pmuserenr_el0( .en=1 );
}

