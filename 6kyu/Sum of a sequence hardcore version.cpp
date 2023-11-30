long long sequence_sum(long long begin, long long end, long long step) {
    if ((begin > end && step > 0) || (begin < end && step < 0)) {
        return 0;
    } else {
        long long n = (end - begin) / step + 1;
        return n * (2 * begin + (n - 1) * step) / 2;
    }
}