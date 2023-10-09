#include "RichTextFormatElement.h"

FRichTextFormatElement::FRichTextFormatElement() {
    this->FormatType = ERichTextFormatType::DIRECTION;
    this->DirectionInputType = EDirectionInputTypes::NONE;
    this->CommandInputType = ECommandInputTypes::NONE;
    this->UIInputType = EUIInputTypes::NONE;
    this->Width = 0;
    this->Height = 0;
    this->bVerticalCenter = false;
}

