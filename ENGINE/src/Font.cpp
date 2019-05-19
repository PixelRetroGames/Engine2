#include "../include/Font.h"

namespace Engine
{
    void Font::Load(std::string filename,int ptr_size)
    {
     if(filename.empty())
        {
         LOG_ERROR("Font","Could not load font, filename is null");
         return;
        }
     font=TTF_OpenFont(filename.c_str(),ptr_size);
     if(font==NULL)
        {
         LOG_ERROR("Font","Could not load font: %s",Get_error());
         return;
        }
     LOG_INFO("Font","Loaded font: name=[%s]",filename.c_str());
    }

    void Font::Clear()
    {
     TTF_CloseFont(font);
     font=NULL;
     LOG_INFO("Font","Closed font");
    }

    Font *Load_font(std::string filename)
    {
     std::size_t q;
     q=filename.find(".ttf");
     if(q==std::string::npos)
        q=filename.find(".TTF");
     if(q==std::string::npos)
        {
         LOG_ERROR("Font","Wrong format (.ttf) is missing");
         return nullptr;
        }
     Font *font;
     font->Load(filename.substr(0,q+4),std::stoi(filename.substr(q+4,filename.length())));
    }

    void Clear_font(Font *font)
    {
     font->Clear();
    }
}
