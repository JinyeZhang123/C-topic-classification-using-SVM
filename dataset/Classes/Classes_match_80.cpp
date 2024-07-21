class Factorial
{
public:
    /**
    * @fn int getFactorial(int target)
    * @brief パラメータの階乗を取得する
    * @param[in] target ターゲット
    * @return int 階乗
    */
    long long getFactorial(int target) const;

private:
    /**
    * @fn int calc(int target)
    * @brief 階乗を計算する
    * @param[in] target ターゲット
    * @return int 階乗
    */
    long long calc(int target) const;
}