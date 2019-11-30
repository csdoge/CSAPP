long lt_cnt = 0;
long ge_cnt = 0;
long gotodiff_se(long x, long y)
{
    long result;
    int t = (x >= y) ? 1 : 0;
    if(t)
        goto true_result;
    else
        goto done;
    true_result:
        ge_cnt++;
        result = x - y;
        return result;
    done:
        lt_cnt++;
        result = y - x;
        return result;
}