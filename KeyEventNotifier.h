#include "INotifier.h"
#include <vector>

class KeyEventNotifier :
    public INotifier
{
public:
    virtual ~KeyEventNotifier() override;
    virtual void addObserver(IObserver& observer) override;
    virtual void removeObserver(IObserver& observer) override;
    virtual void notifyObservers(std::string text) override;
private:
    std::vector<IObserver*> observer_;
};

