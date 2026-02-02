class Solution {
private:
    static string actualLocalName(const string& name) {
        string local;
        local.reserve(name.size()); // optional micro-opt
        for (size_t i = 0, n = name.size(); i < n; ++i) {
            char c = name[i];
            if (c == '+') break;      // ignore rest
            if (c == '.') continue;   // skip dots
            local += c;
        }
        return local;
    }

public:
    int numUniqueEmails(vector<string>& emails) {
        unordered_set<string> uniq;   // faster than set

        for (const string& email : emails) {
            size_t at = email.find('@');

            string local = actualLocalName(email.substr(0, at));
            // Keep domain exactly as-is after '@'
            string domain = email.substr(at);
            // Build normalized address
            string normalized;
            normalized += local;
            normalized += domain;

            uniq.insert(normalized);
        }
        return uniq.size();
    }
};
