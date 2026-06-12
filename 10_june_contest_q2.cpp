t main() {
    int t;
    cin >> t;

    while(t--) {
        int n, m;
        cin >> n >> m;

        string A, B;
        cin >> A >> B;

        string ans = "";

        int lenth;
        if(n < m)
            lenth = n;
        else
            lenth = m;

        for(int i = 0; i < lenth; i++) {
            if(A[i] == B[i])
                ans += A[i];
            else
                break;
        }

        cout << ans << endl;
    }

    return 0;
}