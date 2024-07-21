class Control
    {
    private:
        //! データサイズ
        static const int Size = 5;

    public:
        /**
        * @fn bool executeEx()
        * @brief 5つの整数を読み込み、降順に整列し出力する
        * @return bool 入力値が範囲内ならtrueを、そうでなければfalseを返す
        */
        bool executeEx();

    private:
        /**
        * @fn void read(int target[])
        * @brief 標準入力から読み込む
        * @param[out] target 入力データ
        */
        void read(int target[]);

        /**
        * @fn void write(int target[])
        * @brief 標準出力に書き込む
        * @param[in] target 出力データ
        */
        void write(int target[]);

        /**
        * @fn bool check(int target[])
        * @brief 入力データが範囲内か調べる
        * @param[in] target 調査対象
        * @return bool 入力データが範囲内ならtrueを、そうでなければfalseを返す
        */
        bool check(int target[]);
    }