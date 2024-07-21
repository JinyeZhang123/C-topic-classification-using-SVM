bool operator==(Dice other) {
    if (top == other.top
        && front == other.front
        && right == other.right
        && left == other.left
        && back == other.back
        && bottom == other.bottom) {
      return true;
    }