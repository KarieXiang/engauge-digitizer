#ifndef DATA_KEY_H
#define DATA_KEY_H

/// Index values for storing item details in QGraphicsItem using setData/data
enum DataKey {
  DATA_KEY_IDENTIFIER,           ///> Unique identifier for QGraphicsItem object
  DATA_KEY_GRAPHICS_ITEM_TYPE,   ///> Item type (i.e. image versus point)
  DATA_KEY_ORDINAL,              ///> Ordinal value for orderin points when drawing lines
  DATA_KEY_POSITION_HAS_CHANGED, ///> True if item has changed since last mousePressEvent
  DATA_KEY_WANTED                ///> Wanted/unwanted flag when updating the items in the scene
};

#endif // DATA_KEY_H
