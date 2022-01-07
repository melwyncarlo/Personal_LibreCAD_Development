## Notes

<hr>

### #1

**Path:** src/lib/modification/rs_modification.cpp

In function `copyBlocks`, the command `RS_CLIPBOARD->addBlock((RS_Block*)b->clone())` was changed to `RS_CLIPBOARD->addBlock(b)`.  This is incorrect, as it causes the `Segmentation Fault`; so, beware.

