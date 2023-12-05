#ifndef _PIXELMAP_PROMPT_SERVICE_PROVIDER_
#define _PIXELMAP_PROMPT_SERVICE_PROVIDER_

class screen_generator; // forward reference

class pixelmap_prompt_service_provider : public prompt_service_provider
{
    public:
        pixelmap_prompt_service_provider();

        virtual int GetType() {return GX_TYPE_PIXELMAP_PROMPT;}
        virtual CString GetTypeName(widget_info *) {return CString("GX_TYPE_PIXELMAP_PROMPT");}
        virtual CString GetShortName() {return CString("pixelmap_prompt");}
        virtual CString GetVarDeclaration();
        virtual CString GetControlBlockName() {return CString("GX_PIXELMAP_PROMPT");}

        virtual CString DeclarePropertiesStructContent();
        virtual CString DeclarePropertiesStruct();
        virtual CString WriteExtendedPropertiesContent(screen_generator *gen, widget_info *info, BOOL add_last_comma = FALSE);
        virtual CString WriteExtendedProperties(screen_generator *gen, CString &scope, widget_info *info);
        virtual CString GetCreateFromDefFunctionName();
        virtual CString GetCreateFromDefFunction(int version);

        virtual widget_info *CreateNewInstance(GX_WIDGET *parent);
        virtual GX_WIDGET *GenerateFromInfo(GX_WIDGET *parent, widget_info *info);
        
        virtual void SaveToProject(xml_writer &, studiox_project *project, int display, widget_info *);
        virtual void ReadFromProject(xml_reader &, studiox_project *project, int display, widget_info *info, ULONG valid_styles);
        virtual void AssignPixelmap(widget_info *info, int index, GX_RESOURCE_ID pixmap_id);
        virtual void Autosize(widget_info *info);
};

#endif
