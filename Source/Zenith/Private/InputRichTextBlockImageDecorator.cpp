#include "InputRichTextBlockImageDecorator.h"

UInputRichTextBlockImageDecorator::UInputRichTextBlockImageDecorator() : URichTextBlockDecorator(FObjectInitializer::Get()) {
    this->DecoratorMode = ERichTextDecoratorMode::Auto;
}

