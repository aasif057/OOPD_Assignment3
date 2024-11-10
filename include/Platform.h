#ifndef PLATFORM_H
#define PLATFORM_H

class Platform {
public:
    virtual ~Platform() = default;
    virtual int getStoppageInterval() const = 0;  // Pure virtual function
    virtual void setStoppageInterval(int interval) = 0;
};

class StoppagePlatform : public Platform {
private:
    int stoppageInterval;

public:
    StoppagePlatform(int interval);
    int getStoppageInterval() const override;
    void setStoppageInterval(int interval) override;
};

class ThroughPlatform : public Platform {
private:
    int stoppageInterval;

public:
    ThroughPlatform(int interval = 10);  // Through trains have a default 10-minute interval
    int getStoppageInterval() const override;
    void setStoppageInterval(int interval) override;
};

#endif
