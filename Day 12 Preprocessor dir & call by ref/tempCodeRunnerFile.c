extern int ext = 40; // value is retained through program execution

void fun_block()
{
    // local scope:inside function only
    printf("function block:\n");
    auto int aut = 20; // allocates memory in ram.
    printf("aut=%d\n", aut);
    aut++;
}