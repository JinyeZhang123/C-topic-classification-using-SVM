class Control
{
public:
    /**
    * @fn  bool executeEx() const
    * @brief １つの整数を読み込み、その整数の階乗を出力する
    * @return bool 入力範囲内ならtrueを、そうでなければfalseを返す
    */
    bool executeEx() const;

private:
    /**
    * @fn bool check(int target) const
    * @brief 入力範囲をチェックする
    * @param[in] target チェック対象
    * @return bool 入力範囲内ならtrueを、そうでなければfalseを返す
    */
    bool check(int target) const;

    /**
    * @fn void read(int& data)
    * @brief 標準入力から読み込む
    * @param[out] data 入力整数
    */
    void read(int& data) const;

    /**
    * @fn void write(int target) const
    * @brief 標準出力に書き込む
    * @param[in] target 出力対象
    */
    void write(long long target) const;
}