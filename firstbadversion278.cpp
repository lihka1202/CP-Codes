// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

#define ll unsigned long long
class Solution {
   public:
    int firstBadVersion(int n) {
        // Just drop finding
        ll l = 1;
        ll r = n;
        ll firstBadVersion = 0;
        while (l <= r) {
            ll mid = (l + r) / 2;
            if (isBadVersion(mid) == 1) {
                firstBadVersion = mid;
                r = mid - 1;
            } else {
                l = mid + 1;
            }
        }
        return firstBadVersion;
    }
};