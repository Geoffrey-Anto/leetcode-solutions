func search(nums []int, target int) int {
    l := 0
    r := len(nums) - 1

    for l<=r {
        m := (l+r) / 2
        
        if nums[m] == target {
            return m;
        }

        if nums[l] <= nums[m] {
            // left half is sorted
            if nums[l] <= target && target < nums[m] {
                r = m - 1
            } else {
                l = m + 1
            }
        } else {
            // right half is sorted
            if nums[m] < target && target <= nums[r] {
                l = m + 1
            } else {
                r = m - 1
            }
        }
    }

    return -1
}
