class DiningPhilosophers {
private:
    mutex fork[5];

public:
    DiningPhilosophers() {}
    void wantsToEat(int philosopher, function<void()> pickLeftFork,
                    function<void()> pickRightFork, function<void()> eat,
                    function<void()> putLeftFork,
                    function<void()> putRightFork) {
        int left = philosopher;
        int right = (philosopher + 1) % 5;

        unique_lock<mutex> leftLock(fork[left], defer_lock);
        unique_lock<mutex> rightLock(fork[right], defer_lock);
        lock(leftLock, rightLock);

        pickLeftFork();
        pickRightFork();

        eat();

        putLeftFork();
        putRightFork();
    }
};