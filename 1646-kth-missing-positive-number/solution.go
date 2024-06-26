func findKthPositive(arr []int, k int) int {
    l := 0
    r := len(arr) - 1

    for l <= r {
        m := (l+r)/2

        val := arr[m]

        if (val - (m + 1)) < k {
            l = m + 1
        } else {
            r = m - 1;
        }
    }

    return r + k + 1;
}
