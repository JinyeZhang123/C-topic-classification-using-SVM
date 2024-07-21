class SortingFiveNumbers
    {
    private:
        //! データサイズ
        static const int Size = 5;

        //! 入力値
        int dataList[Size];

    public:
        /**
        * @brief コンストラクタ
        */
        SortingFiveNumbers(int target[]) {
            memset(dataList, 0, Size);

            for (int i = 0; i < Size; i++) {
                dataList[i] = target[i];
            }