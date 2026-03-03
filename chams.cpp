if (Visuals::Players::Chams)
{
    auto multimesh = player->playerModel()->_multiMesh();
    if (multimesh)
    {
        auto mainRendList = multimesh->get_Renderers();
        for (int idx = 0; idx < mainRendList->size(); idx++)
        {
            Renderer* renderer = mainRendList->value(idx);
            if (renderer) 
            {
                Material* material = renderer->get_material();
                if (material)
                {
                    //матерьялы я хз 

                    // типо поверх стены 
                    material->SetInt(Str(L"_ZTest"), 8);

                    //  через иишку сделал
                    material->SetInt(Str(L"_ZWrite"), 0);

                    // типо подсветка 1 это белый так что оно не будет изменять скин ес чо я с другой херни брал и чутка изменил кароч шейдеры чтоб радужным не было я хз и да надо оффсеты (((
                    material->SetColor(Str(L"_Color"), Color(1.f, 1.f, 1.f, 1.f));
                }
            }
        }
    }
}
