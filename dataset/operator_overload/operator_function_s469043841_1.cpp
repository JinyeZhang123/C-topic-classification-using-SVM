bool operator==(Value &other) {
            for (int i = 0; i < N; i++)
                if (val[i] != other.val[i]) return false;
            return true;
        }