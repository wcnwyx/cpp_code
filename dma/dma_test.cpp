#include "dma.h"

int main()
{
    using std::cout;

    BaseDMA baseDMA("baseDMA", 1);
    LackDMA lackDMA("red", "locakDMA", 22);
    HasDMA hasDMA("big", "hasDMA", 33);

    cout << "display baseDMA: \n" << baseDMA << std::endl;
    cout << "display lackDMA: \n" << lackDMA << std::endl;
    cout << "display hasDMA: \n" << hasDMA << std::endl;

    LackDMA lackDMA2(lackDMA);
    HasDMA hasDMA2("small", hasDMA);

    cout << "display lackDMA2: \n" << lackDMA2 << std::endl;;
    cout << "display hasDMA2: \n" << hasDMA2 << std::endl;;
    return 0;
}