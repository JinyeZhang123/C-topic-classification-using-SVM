bool operator<(const Exam& exam) {
        return (x - b) * u + b * l < (exam.x - exam.b) * exam.u + exam.b * exam.l;
    }